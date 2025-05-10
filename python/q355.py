class Twitter:

    def __init__(self):
        self.following_dict = defaultdict(set)
        self.tweets = defaultdict(list) # key: userid, value: timestamp, tweetsid
        self.timestamp = 0

    def postTweet(self, userId: int, tweetId: int) -> None:
        self.tweets[userId].append((timestamp, tweetId))
        self.timestamp += 1


    def getNewsFeed(self, userId: int) -> List[int]:
        res = []
        maxheap = []
        for followeeId in self.following_dict[userId]:
            if followeeId in self.tweets:
                index = len(self.tweets[followeeId]) - 1
                timestamp, tweetId = self.tweets[followeeId][index]
                maxheap.append([-timestamp, tweetId, followeeId, index - 1])
        heapq.heapify(maxnHeap)

        while minHeap and len(res) < 10:
            timestamp, tweetId, followeeId, index = heapq.heappop((maxheap))
            timestamp = -timestamp
            res.append(tweetId)

    def follow(self, followerId: int, followeeId: int) -> None:
        self.following_dict[followerId].add(followeeId)

    def unfollow(self, followerId: int, followeeId: int) -> None:
        if followeeId in self.following_dict[followerId]:
            self.following_dict[followerId].remove(followeeId)


# Your Twitter object will be instantiated and called as such:
# obj = Twitter()
# obj.postTweet(userId,tweetId)
# param_2 = obj.getNewsFeed(userId)
# obj.follow(followerId,followeeId)
# obj.unfollow(followerId,followeeId)